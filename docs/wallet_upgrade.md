# Wallet Guides


# Windows QT Wallet Backup and Upgrade Guide

* First of all, don't forget to back up your current data.

* Close your wallet.

* Open the Run window using the WIN + R key combination.


* Enter the `%appdata%/SIN` command and click the OK button. Thus, you will reach the directory where your SIN data is kept.

![run](assets/img/misc/run.png)
 

Your wallet.dat file can be either in the wallets directory or in the SIN home directory, depending on the situation. Pay attention to this and back up these files to a suitable medium. We recommend that you do this periodically.

  
![directory](assets/img/misc/directory.png)

*Shut down the wallet. Backup wallet.dat and infinitynode.conf file.


Download the latest version of Windows Wallet at [https://github.com/SINOVATEblockchain/SIN-core/releases](https://github.com/SINOVATEblockchain/SIN-core/releases)
 

![release](assets/img/misc/release.png)
 
 Replace the sin-qt.exe file in the compressed file you downloaded with the sin-qt.exe file you are currently using.

:warning: For users who will upgrade from older versions to 1.0.0.0. Important Notice :

- Close the wallet
- Back up
- Delete everything except wallet.dat and infinitynode.conf
- Start the wallet.
- Please wait for it to be fully synchronized. Do not use Bootstrap.
- This is important because the system changes and a new node DB is created.
:warning: This is important because the system changes and a new node DB is created.



# MAC QT Wallet Backup and Upgrade Guide

* First of all, don't forget to back up your current data.

* Close your wallet.

* In order to see hidden folders, such as `~/Library` from Finder, simply hit `shift + ⌘ (command) + G` which will GO to a folder, then paste in this location:


* ```~/Library/Application Support/SIN```

![run](assets/img/misc/mac_backup01.png)

![run2](assets/img/misc/mac_backup02.png)

![run3](assets/img/misc/mac_backup03.png)
 

Your wallet.dat file can be either in the wallets directory or in the SIN home directory, depending on the situation. Pay attention to this and back up these files to a suitable medium. We recommend that you do this periodically.

  
![run4](assets/img/misc/mac_backup04.png)

![run5](assets/img/misc/mac_backup05.png)

*Shut down the wallet. Backup wallet.dat and Remove all old files and folders. 


Download the latest version of MAC Wallet at [https://github.com/SINOVATEblockchain/SIN-core/releases](https://github.com/SINOVATEblockchain/SIN-core/releases)
 

![run6](assets/img/misc/mac_backup06.png)
  

Replace the `sin-qt app` file in the compressed file you downloaded with the `sin-qt app` file you are currently using.

*Start the new wallet and wait for synchronization.



# VPS Infinity Node Update And Sync Guide

**disable it if you are using a crontab**
```bash
crontab -l > my_cron_backup.txt
crontab -r
```

**if running Infinity Node, stop it.**
```bash
sudo systemctl stop sinovate.service
./sin-cli stop
```

**update Latest Wallet** 
```bash
wget -O daemon.tar.gz https://github.com/SINOVATEblockchain/SIN-core/releases/latest/download/daemon.tar.gz

tar -xzvf daemon.tar.gz
```

**remove old files and folders**
With WinSCP or similar program

Delete everything except wallet.dat (or wallets folder) and sin.conf.

![delete](assets/img/misc/delete.png)

**Run the daemon. DO NOT USE BOOTSTRAP**
```bash
./sind
```

**if everything is ok and you are using crontab, re-enable it.**
```bash
crontab my_cron_backup.txt
crontab -l
```
**remove unnecessary files**
```bash
rm -rf ~/{bootstrap,bootstrap.zip}
```
