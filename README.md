# 🎬 Sistema de Reserva de Assentos em C

Este é um programa simples em linguagem C que simula um sistema de reserva de cadeiras de cinema. O sistema possui três fileiras (`A`, `B` e `C`), cada uma com 10 assentos numerados de 1 a 10.

## 🧠 Como funciona

- O programa usa três vetores (`fileiraA`, `fileiraB`, `fileiraC`) para representar o estado dos assentos.
- A escolha do usuário é feita com uma letra (A, B ou C) e um número (1–10), por exemplo: `B5`.
- Os assentos já ocupados são exibidos como `[XX]`.

## ▶️ Como compilar e executar

```bash
gcc reserva_cinema.c -o reserva
./reserva
