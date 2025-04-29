# Rope Simulation

## Overview
This project aims to create a simple physics-based simulation of a rope, written in C++ with Python used for visualization.  
The rope is modeled as a series of connected mass points influenced by spring forces, gravity, and basic constraints to maintain the rope's structure.

The goal of this project is to explore basic physics simulation techniques, and to familiarize myself with codes to create simulation (C++) and visualization (Python).

## Simulation Method
The rope is represented as a chain of point masses connected by ideal springs.  
Each time step consists of:
1. Computing forces on each mass point (spring forces + gravity)
2. Updating positions using Verlet integration
3. Enforcing constraints (optional: fixing endpoints)
