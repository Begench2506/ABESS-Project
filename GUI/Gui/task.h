#ifndef TASK_H
#define TASK_H
#include <QWidget>
#include <QString>

namespace Ui {
class Task;
}

class Task : public QWidget
{
    Q_OBJECT

public:
    explicit Task(QWidget *parent = nullptr);
    ~Task();
    QString generateEdges(int n, int m);
    void prepare_number(QString num);
signals:
    void on_closed();
private:
    Ui::Task *ui;
    int a;
    int b;
    QString task_num;
    QString answer;
    std::vector<std::pair<int, int>> edges;
private slots:
    void on_Ok_clicked();
};

#endif // TASK_H
