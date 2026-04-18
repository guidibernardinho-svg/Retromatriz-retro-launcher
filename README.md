# 🎮 RetroMatriz (iOS)

Um projeto experimental de emulador multi-sistema para iOS, escrito em C++ com integração Objective-C++.

> ⚠️ Este projeto é apenas educacional e NÃO é um “emulador de tudo”. Cada console precisa de um núcleo próprio.

---

## 🚀 Sobre o projeto

O ** retromatriz é uma base para construção de emuladores, inspirado em projetos como RetroArch.

Ele fornece:

* Estrutura modular para múltiplos sistemas
* Núcleo em C++
* Integração com iOS
* Base para renderização e execução de ROMs

---

## 📁 Estrutura

```
UniversalEmu/
├── core/        # Núcleo do emulador (C++)
├── ios/         # Interface iOS (Objective-C++)
├── CMakeLists.txt
└── README.md
```

---

## ⚙️ Tecnologias usadas

* C++17
* Objective-C++
* CMake
* Metal / OpenGL (futuro)

---

## ▶️ Como rodar

### 1. Clonar o repositório

```bash
git clone https://github.com/seu-usuario/UniversalEmu.git
cd UniversalEmu
```

### 2. Build com CMake

```bash
mkdir build
cd build
cmake ..
make
```

### 3. Rodar (modo teste)

```bash
./emu
```

---

## 📱 iOS

Para rodar no iOS:

1. Abra o projeto no Xcode
2. Configure sua conta Apple
3. Compile para seu dispositivo

> ⚠️ iOS possui limitações como ausência de JIT sem jailbreak.

---

## 🧠 Arquitetura

O projeto usa uma interface base:

```cpp
class Emulator {
public:
    virtual bool loadROM(const std::string& path) = 0;
    virtual void runFrame() = 0;
    virtual void reset() = 0;
};
```

Cada console implementa seu próprio núcleo.

---

## 🔥 Roadmap

* [ ] Implementar emulador NES
* [ ] Suporte a áudio
* [ ] Renderização com Metal
* [ ] Input touchscreen
* [ ] Sistema de múltiplos cores
* [ ] UI completa

---

## 📚 Referências

Projetos reais para estudo:

* Dolphin Emulator
* PCSX2

---

## ⚠️ Aviso legal

* Não incluímos ROMs
* Use apenas jogos que você possui legalmente
* Este projeto é para aprendizado

---

## 🤝 Contribuição

Pull requests são bem-vindos!

1. Fork o projeto
2. Crie sua branch
3. Commit suas mudanças
4. Abra um PR

---

## 📄 Licença

MIT License

---

## 💡 Autor

Criado por você 🚀
