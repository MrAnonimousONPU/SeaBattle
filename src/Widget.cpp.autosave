#include "Widget.hpp"
#include "ui_Widget.h"

Widget::Widget(std::shared_ptr<IPCInterface> IPC, QWidget *parent)
    : QWidget(parent)
    , ui{std::make_shared<Ui::Widget>()}
    , m_IPC{IPC}
    , m_nickName("NewUser")
{
    ui->setupUi(this);

    m_boatSetUpManager = std::make_shared<BoatSetUpManager>(ui);

    ui->StartNickName->setText(m_nickName);

    ui->stackedWidget->setCurrentIndex(Constants::Screen::MAIN_MENU);

    connect(ui->StartButton, SIGNAL(clicked()), this, SLOT(onStartButtonClicked()));
    connect(ui->StartBackButton, SIGNAL(clicked()), this, SLOT(onStartBackButtonClicked()));
    connect(ui->StartCreateButton, SIGNAL(clicked()), this, SLOT(onStartCreateButtonClicked()));

    connect(ui->FieldSetUpBackButton, SIGNAL(clicked()), this, SLOT(onFieldSetUpBackButtonClicked()));
    connect(ui->BoatRotate, SIGNAL(clicked()), this, SLOT(onFieldSetUpRotateButtonClicked()));
    connect(ui->BoatButton1, SIGNAL(clicked()), this, SLOT(onFieldSetUpBoat1ButtonClicked()));
    connect(ui->BoatButton2, SIGNAL(clicked()), this, SLOT(onFieldSetUpBoat2ButtonClicked()));
    connect(ui->BoatButton3, SIGNAL(clicked()), this, SLOT(onFieldSetUpBoat3ButtonClicked()));
    connect(ui->BoatButton4, SIGNAL(clicked()), this, SLOT(onFieldSetUpBoat4ButtonClicked()));

    connect(ui->SettingsButton, SIGNAL(clicked()), this, SLOT(onSettingsButtonClicked()));
    connect(ui->SettingsBackButton, SIGNAL(clicked()), this, SLOT(onSettingsBackButtonClicked()));
    connect(ui->SettingsSaveButton, SIGNAL(clicked()), this, SLOT(onSettingsSaveButtonClicked()));
}

Widget::~Widget()
{
}

void Widget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Widget::onStartButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(Constants::Screen::GAMES_LIST);
}

void Widget::onStartBackButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(Constants::Screen::MAIN_MENU);
}

void Widget::onStartCreateButtonClicked()
{
    if (m_IPC->createServer()) {
        ui->stackedWidget->setCurrentIndex(Constants::Screen::GAME);
    } else {
        //TODO: Dialog window
    }
}

void Widget::onFieldSetUpBackButtonClicked()
{
    this->setCursor(Qt::ArrowCursor);
    ui->stackedWidget->setCurrentIndex(Constants::Screen::GAMES_LIST);
}

void Widget::onFieldSetUpBoat1ButtonClicked()
{
    if (0 < ui->Boat1->value()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat1"), 11, 11));
    }
}

void Widget::onFieldSetUpBoat2ButtonClicked()
{
    if (0 < ui->Boat2->value()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat2"), 11, 11));
    }
}

void Widget::onFieldSetUpBoat3ButtonClicked()
{
    if (0 < ui->Boat3->value()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat3"), 11, 11));
    }
}

void Widget::onFieldSetUpBoat4ButtonClicked()
{
    if (0 < ui->Boat4->value()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat4"), 11, 11));
    }
}

void Widget::onFieldSetUpRotateButtonClicked()
{
    const qint64 cacheKey = this->cursor().pixmap().cacheKey();

    if (cacheKey == QPixmap(":/boats/images/Boat2").cacheKey()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/VBoat2"), 11, 11));
    } else if (cacheKey == QPixmap(":/boats/images/VBoat2").cacheKey()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat2"), 11, 11));
    } else if (cacheKey == QPixmap(":/boats/images/Boat3").cacheKey()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/VBoat3"), 11, 11));
    } else if (cacheKey == QPixmap(":/boats/images/VBoat3").cacheKey()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat3"), 11, 11));
    } else if (cacheKey == QPixmap(":/boats/images/Boat4").cacheKey()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/VBoat4"), 11, 11));
    } else if (cacheKey == QPixmap(":/boats/images/VBoat4").cacheKey()) {
        this->setCursor(QCursor(QPixmap(":/boats/images/Boat4"), 11, 11));
    }
}

void Widget::onSettingsButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(Constants::Screen::SETTINGS_SCREEN);
}

void Widget::onSettingsBackButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(Constants::Screen::MAIN_MENU);
}

void Widget::onSettingsSaveButtonClicked()
{
    m_nickName = ui->lineEdit->text();
    ui->StartNickName->setText(m_nickName);
}

void Widget::on_FieldSetUpTable_cellClicked(int row, int column)
{
    const qint64 cacheKey = this->cursor().pixmap().cacheKey();

    if (cacheKey == QPixmap(":/boats/images/Boat1").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 1)) {
            ui->Boat1->display(ui->Boat1->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    } else if (cacheKey == QPixmap(":/boats/images/Boat2").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 2)) {
            ui->Boat2->display(ui->Boat2->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    } else if (cacheKey == QPixmap(":/boats/images/Boat3").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 3)) {
            ui->Boat3->display(ui->Boat3->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    } else if (cacheKey == QPixmap(":/boats/images/Boat4").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 4)) {
            ui->Boat4->display(ui->Boat4->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    } else if (cacheKey == QPixmap(":/boats/images/VBoat2").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 2, Constants::Direction::VERTICAL)) {
            ui->Boat2->display(ui->Boat2->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    } else if (cacheKey == QPixmap(":/boats/images/VBoat3").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 3, Constants::Direction::VERTICAL)) {
            ui->Boat3->display(ui->Boat3->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    } else if (cacheKey == QPixmap(":/boats/images/VBoat4").cacheKey()) {
        if (m_boatSetUpManager->setUpBoat(row, column, 4, Constants::Direction::VERTICAL)) {
            ui->Boat4->display(ui->Boat4->value() - 1);
            this->setCursor(Qt::ArrowCursor);
        }
    }
}
