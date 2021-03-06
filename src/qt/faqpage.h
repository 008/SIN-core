#ifndef FAQPAGE_H
#define FAQPAGE_H
#include "walletmodel.h"
#include <QWidget>
#include <QPushButton>

namespace Ui {
class FaqPage;
}

class WalletModel;




class FaqPage :  public QWidget

{
    Q_OBJECT

public:
    explicit FaqPage(const PlatformStyle *platformStyle, QWidget *parent = 0);
    ~FaqPage();

void showEvent(QShowEvent *event) override;

public Q_SLOTS:
    void setSection(int num);
private Q_SLOTS:
    void onFaq1Clicked();
    void onFaq2Clicked();
    void onFaq3Clicked();
    void onFaq4Clicked();
    void onFaq5Clicked();
    void onFaq6Clicked();
    void onFaq7Clicked();
    void onFaq8Clicked();
    void onFaq9Clicked();
    void onFaq10Clicked();
    

private:
    Ui::FaqPage *ui;
    const PlatformStyle *platformStyle;
    int pos = 0;

    std::vector<QPushButton*> getButtons();
};





#endif // FAQPAGE_H