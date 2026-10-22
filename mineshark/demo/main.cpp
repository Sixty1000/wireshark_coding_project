// SPDX-License-Identifier: GPL-2.0-or-later
#include "mineshark_dialog.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    app.setApplicationName("Mineshark Simulation");
    mineshark::FirewallClient client(true);
    QWidget launcher;
    launcher.setWindowTitle("Mineshark · Simulation launcher");
    auto *layout = new QVBoxLayout(&launcher);
    layout->addWidget(new QLabel("MINESHARK\nStandalone simulation · no firewall changes"));
    auto *play = new QPushButton("Challenge 10.0.2.15 vs 10.0.2.4");
    auto *blocks = new QPushButton("Active Blocks");
    layout->addWidget(play); layout->addWidget(blocks);
    QObject::connect(play, &QPushButton::clicked, &launcher, [&] {
        mineshark::ChallengeDialog dialog("10.0.2.15", "10.0.2.4", &client, &launcher); dialog.exec();
    });
    QObject::connect(blocks, &QPushButton::clicked, &launcher, [&] {
        mineshark::BlocksDialog dialog(&client, &launcher); dialog.exec();
    });
    launcher.show();
    QTimer::singleShot(0, play, &QPushButton::click);
    return app.exec();
}
