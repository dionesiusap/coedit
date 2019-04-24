## Notepad Google Docs Like ish Program!

### Petunjuk Penggunaan
1. clone repo ini
2. buka folder build
3. install qt sesuai os anda (pastikan compiler memiliki unistd.h)
4. jalankan perintah make
5. jalankan perintah notepad dengan format sbb: 
    ./notepad iplocal:portlocal ippeer:portpeer ippeer:portpeer
    ex : ./notepad 127.0.0.1:5001 192.168.0.2:5002 192.168.0.3:5003

### Pembagian Tugas
- 13516082 (50%): fungsi Controller, Messenger, VersionVector, deletion buffer.


### Penjelasan Program

##### Notepad (UI)
program kami menggunakan qt sebagai library pembantu membuat user interface. Kelas notepad berguna untuk menampilkan data dan menangkap input dari user (key press). Kelas notepad berhubungan dengan kelas controller melalui mekanisme signal dan slot dari qt. Kelas notepad memiliki 1 thread yang berjalan untuk memperbarui gui.

##### Controller
kelas ini berfungsi sebagai pengatur jalannya program. Terdapat 1 buah thread yang berjalan di kelas controller, thread ini berguna untuk memeriksa apakah ada masukan perintah dari kelas lain. kelas controller berhubungan dengan kelas messenger melalui mekanisme queue, dimana jika ada pesan baru dari kelas messengger maka messenger akan meletakan pesan tersebut ke dalam messagequeue yang dapat diakses oleh controller. Kelas controller berhubungan dengan kelas notepad melalui mekanisme signal dan slot dari qt. Kelas controller juga memegang deletion buffer dan version vector.

#### CRDT
crdt diimplementasikan menggunakan struktur data vector dari c++. position pada crdt disimpan dalam bentuk double, hal ini dilakukan untuk memudahkan pengiriman data crdt melalui socket (tidak ada pointer pada crdt). kelas ini digunakan untuk merepresentasikan sebuah data beserta perintah yang datang bersama data tersebut. Berikut ini adalah struktur kelas crdt kami : 

```
class CRDT 
    int siteId;
    int counter;
    char command;
    char value;
    double position;
```

karena alasan kemudahan implementasi fungsi crdt terdapat pada kelas controller.

#### Messenger
program kami berkomunikasi satu sama lain menggunakan koneksi udp, program yang berjalan tidak bisa menjangkau peer yang berada di belakang network dengan NAT. Kelas messenger memiliki 2 buah thread, thread untuk mendengarkan pesan masuk dan thread untuk mengirim pesan. Kelas ini berhubungan dengan controller melalu queue. Ketika ada pesan masuk thread server akan memasukan pesan ke inboxqueue dan jika controller ingin mengirim pesan maka controller harus memasukan data ke outboxqueue.

