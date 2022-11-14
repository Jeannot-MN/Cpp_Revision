#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->CloseBtn, SIGNAL(released()),this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddBtn_released()
{
    bool ok;
    QString name = QInputDialog::getText(this, tr("Add Employee"),
                                                tr("Enter name:"), QLineEdit::Normal,
                                                "", &ok);
    if (ok && !name.isEmpty())
        ui->listWidget_3->addItem(name);
}

void MainWindow::on_EditBtn_released()
{
    int row = ui->listWidget_3->currentRow();
    bool ok;
    QString name = QInputDialog::getText(this, tr("Edit Employee"),
                                                tr("Edit:"), QLineEdit::Normal,
                                                 QString("%1").arg(ui->listWidget_3->currentItem()->text()), &ok);
    if (ok && !name.isEmpty())
        ui->listWidget_3->item(row)->setText(name);
}

void MainWindow::on_RemoveBtn_released()
{
  int reply = QMessageBox::question(this, "Remove employee", QString("Do you wan to remove employee %1").arg(ui->listWidget_3->currentItem()->text()),
                                  QMessageBox::Yes, QMessageBox::No, QMessageBox::NoButton);

   if (reply == QMessageBox::Yes)
       ui->listWidget_3->takeItem(ui->listWidget_3->currentRow());
   else
       return;
}

void MainWindow::on_UpBtn_released()
{
   int row = ui->listWidget_3->currentRow();

   if (row >=1)
   {
       QListWidgetItem *item = ui->listWidget_3->takeItem(row);
       ui->listWidget_3->insertItem(row-1 , item);
       ui->listWidget_3->setCurrentItem(item);
   }
}

void MainWindow::on_DownBtn_released()
{
    int row = ui->listWidget_3->currentRow();

    if (row < ui->listWidget_3->count()-1)
    {
        QListWidgetItem *item = ui->listWidget_3->takeItem(row);
        ui->listWidget_3->insertItem(row+1 , item);
        ui->listWidget_3->setCurrentItem(item);
    }
}

void MainWindow::on_SortBtn_released()
{
    ui->listWidget_3->sortItems();
}
