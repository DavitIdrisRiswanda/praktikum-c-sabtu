#include <stdio.h>
#include <unistd.h>

// Array untuk menyimpan level kekeruhan air
int levels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk menentukan kecepatan motor berdasarkan level kekeruhan air
int determineMotorSpeed(int level) {
    return 1000;
}

// Fungsi untuk menjalankan motor utama
void runMainMotor(int speed, int duration) {
    printf("Mesin cuci utama berputar dengan kecepatan %d rpm tunggu selama %d menit.\n", speed, duration);
    // Simulasi berputarnya motor utama
    sleep(duration * 60); // Konversi menit ke detik
    printf("Mesin cuci utama berhenti.\n");
}

// Fungsi untuk membuka dan menutup klep
void operateValveMotor(const char* keterangan1,int duration,const char* keterangan) {
    printf("%stunggu selama %d menit %s \n",keterangan1, duration,keterangan);
    // Simulasi berputarnya motor klep
    sleep(duration * 60); // Konversi menit ke detik
}

int main() {
    // Menjalankan motor listrik pembuka klep pengisian air selama 2 menit
    operateValveMotor("Mesin cuci aktif membuka klep pengisian air ",2,"sampai air penuh");
 
    // Inisialisasi generator angka acak dengan waktu saat ini
    srand(time(NULL));

    // Memilih level kekeruhan air secara acak dari array
    int selectedLevel = levels[rand() % 9];
    printf("Sensor turbidimeter aktif dengan Level kekeruhan air yang telah terdeteksi dengan level: %d NTU\n", selectedLevel);

    // Menentukan kecepatan motor listrik utama berdasarkan level kekeruhan air yang dipilih
    int motorSpeed = determineMotorSpeed(selectedLevel);
    
    
    // Motor listrik utama berputar sesuai dengan level kekeruhan air yang dipilih
    runMainMotor(motorSpeed, 1);

    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit
    operateValveMotor("Mesin cuci membuka klep pembuangan air kotor ",2,"sampai air kotor habis");

    // Motor listrik pembuka klep pengisian air aktif selama 2 menit
    operateValveMotor("Mesin cuci membuka klep pengisian air ",2,"sampai air penuh");

    // Motor listrik utama berputar selama sisa waktu mencuci
    printf("Mesin cuci memulai pencucian\n");
    runMainMotor(motorSpeed, 2);

    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit
    operateValveMotor("Mesin cuci membuka klep pembuangan air kotor ",2,"sampai air habis");
    
    
    // Motor listrik utama berputar dengan kecepatan 2000 rpm selama 3 menit untuk mengeringkan cucian
     printf("Mesin cuci mengeringkan cucian\n");
     runMainMotor(2000, 3);
     printf("Cucian telah selesai dan sudah kering");
  
    return 0;
}

