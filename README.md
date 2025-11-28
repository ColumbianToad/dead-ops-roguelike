# Project Rogue-Arena (Working Title)

A fast-paced, top-down 2D roguelike shooter inspired by classic wave-based arcade games and Dead Ops Arcade.  
Featuring pixel art, high-action combat, escalating difficulty, and permadeath survival — fight waves, survive, progress, defeat bosses, die, retry, improve.

---

## 🎮 Genre & Overview

**Genre:** Shooter • Survival • Roguelike  
**Art Style:** Pixel  
**Perspective:** Top-Down  
**Platform:** PC (initially)

This project aims to create a replayable, skill-based arena shooter where the player battles through waves of enemies, gathers weapons and power-ups, faces bosses, and inevitably gets overwhelmed. The focus is on tight gameplay, a clean loop, and satisfying combat feedback.

---

## ⚔️ Core Gameplay Loop

1. **Fight waves of enemies**  
2. **Gather power-ups, weapons, and temporary buffs**  
3. **Survive long enough to progress to the next arena**  
4. **Fight boss encounters at key milestones**  
5. **Eventually get overwhelmed and die**  
6. **Retry with new strategies, builds, and progression paths**

---

## 🔥 Core Features (Initial Scope)

- Fast-paced, top-down pixel shooter combat  
- 2D pixel art with simple, readable animations  
- Tight player movement + directional shooting  
- Multiple enemy types with unique behaviours  
- Wave-based survival with scaling difficulty  
- Randomised weapon drops, treasure, and modifiers  
- Boss fights at milestone levels  
- Permadeath with strong replayability  
- Endless or semi-endless progression  
- Designed to eventually become “impossible” — the challenge escalates indefinitely  

---

## 🌱 Long-Term Vision

Potential expansions for later development stages include:

- Multiple themed zones/biomes  
- Larger variety of enemies and advanced AI behaviour  
- Additional bosses per zone  
- Unlockable characters with unique stats/playstyles  
- Permanent meta-progression outside runs  
- Weapon crafting or upgrade trees  
- Special events or elite enemy variants  
- Online or local leaderboards  
- Daily/weekly challenge modes  
- Story elements, lore, and in-game collectibles  

---

## 🧰 Tech Stack

- **Language:** C++  
- **Framework:** Raylib  
- **Build System:** (Planned) CMake  
- **IDE:** Visual Studio Code  

---

## 🗺️ Development Roadmap

### **Phase 1 — Core Movement & Shooting**
- Player movement  
- Directional shooting  
- Basic projectile system  
- Camera & basic HUD  

### **Phase 2 — Enemies & Waves**
- Enemy types  
- Simple AI behaviour (chase, ranged, swarm, tank)  
- Wave generator  
- Spawn system  
- Scoring system  

### **Phase 3 — Roguelike Systems**
- Randomised pickups / weapons  
- Health, buffs, and modifiers  
- Level progression between arenas  
- Basic boss encounter structure  
- Permadeath loop  

### **Phase 4 — Art & Animations**
- Pixel art player sprites  
- Enemy sprites + simple animations  
- Weapons, bullets, VFX  
- UI elements, icons, menus  

### **Phase 5 — Polish & Effects**
- Camera shake  
- Hit effects & particles  
- Sound design  
- Lighting simulation (if used)  
- Gameplay balancing & QoL  
- Story elements (optional)

---

## 🧩 Gameplay Design Details (Placeholder)

This section will document:

- Player abilities, stats, movement speed  
- Enemy archetypes (ranged, swarm, tank, elite, boss behaviours)  
- Weapon list and progression paths  
- Power-up types and rarity levels  
- Level/arena design philosophy  
- Boss mechanics and difficulty spikes  
- Potential meta-progression systems  

This will evolve as the project develops.

---

## 📸 Screenshots & Media (Coming Soon)

Screenshots, GIFs, and gameplay previews will be added as development progresses.  
This section will be used to track visual progress throughout the project.

---

## 🛠️ Building & Running the Project

### **Prerequisites**
- C++ compiler (GCC/Clang/MSVC)  
- Raylib installed or included as part of the project  
- CMake (recommended for long-term maintainability)  
- Visual Studio Code (recommended)  

### **Basic Build Instructions**  
*(Will be updated once CMake structure is finalised)*

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/yourrepo.git
2. Ensure Raylib is installed or included.

3. Compile the project (example using g++):

```bash
    g++ src/main.cpp -o RogueArena -lraylib```

4. Run the game:
```bash 
    ./RogueArena```