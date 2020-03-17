#ifndef WIDGET_HPP
#define WIDGET_HPP

#include <Constants.hpp>
#include <CommonIPC.hpp>
#include <BoatSetUpManager.hpp>

#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QLCDNumber>

#include <iostream>
#include <memory>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(std::shared_ptr<IPCInterface> IPC, QWidget *parent = 0);
    ~Widget();

protected:
    void changeEvent(QEvent *e);

private slots:
    void onStartButtonClicked();
    void onStartBackButtonClicked();
    void onStartCreateButtonClicked();

    void onFieldSetUpBackButtonClicked();
    void onFieldSetUpBoat1ButtonClicked();
    void onFieldSetUpBoat2ButtonClicked();
    void onFieldSetUpBoat3ButtonClicked();
    void onFieldSetUpBoat4ButtonClicked();
    void onFieldSetUpRotateButtonClicked();
    void on_FieldSetUpTable_cellClicked(int row, int column);

    void onSettingsButtonClicked();
    void onSettingsBackButtonClicked();
    void onSettingsSaveButtonClicked();

private:
    std::shared_ptr<Ui::Widget> ui;
    std::shared_ptr<IPCInterface> m_IPC;
    std::shared_ptr<BoatSetUpManager> m_boatSetUpManager;
    QString m_nickName;
};

#endif // WIDGET_HPP
