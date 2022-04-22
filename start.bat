@echo off
g++ run.cpp tools.cpp recipes/Recipe.cpp recipes/RecipesList.cpp recipes/recipes_read_data.cpp enemies/Creature.cpp enemies/Biter.cpp enemies/SpitterOrWorm.cpp enemies/creatures_data.cpp enemies/creatures_read_data.cpp extras/ascii_image.cpp technologies/Technology.cpp technologies/TechnologiesList.cpp technologies/technologies_data.cpp -o run.exe
run.exe