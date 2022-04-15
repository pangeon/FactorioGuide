#!/bin/bash
g++ g++ run.cpp tools.cpp recipes/Recipe.cpp recipes/RecipesList.cpp recipes/recipes_read_data.cpp enemies/Creature.cpp enemies/Biter.cpp enemies/SpitterOrWorm.cpp enemies/creatures_data.cpp enemies/creatures_read_data.cpp extras/ascii_image.cpp -o run
./run