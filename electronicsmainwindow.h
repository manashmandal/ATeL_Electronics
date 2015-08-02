#ifndef ELECTRONICSMAINWINDOW_H
#define ELECTRONICSMAINWINDOW_H

#include <QMainWindow>
#include <QIcon>
#include <QWebView>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QListWidgetItem>
#include <QDebug>
#include <QPair>
#include <QMap>
#include <QMessageBox>
#include <QWebSettings>
#include <QWidget>
#include <QTimer>
#include <QPropertyAnimation>
#include <QPixmap>
#include <QFontDialog>
#include <QTreeWidgetItem>
#include <QTreeWidgetItemIterator>

#define DEFAULT_TREE_COLUMN 0
#define DEFAULT_INDEX 0

namespace Ui {
class ElectronicsMainWindow;
}

class ElectronicsMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ElectronicsMainWindow(QWidget *parent = 0);
    void loadListDefaultItems();
    void loadTopicLink();
    QString linkMaker(QString);
    ~ElectronicsMainWindow();

public slots:

    void on_moreButton_toggled(bool checked);
    void findTopic(QString the_topic);
    void updateIndexList(QStringList list);
    void on_indexTreeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void loadLink(int);

    void on_indexListWidget_itemClicked(QListWidgetItem *item);

    void on_fontButton_clicked();


    void loadTheUrl(QUrl);



signals:
    void passFoundTopicList(QStringList topic_list);
    void passKey(int);
    void loadUrl(QUrl);

private:
    Ui::ElectronicsMainWindow *ui;
    static const QString file_initial;
    static const QString html;
    QFont font;

    QList<QListWidgetItem *> found_items;
    QStringList found_item_name;
    QStringList topic_lists;
    QStringList topic_links;
    QList <QPair <QString, QString> > topic_name_link;
    QMap < int, QPair <QString, QString> > topic_name_link_map;
};

#endif // ELECTRONICSMAINWINDOW_H
