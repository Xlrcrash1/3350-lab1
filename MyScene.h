#pragma once

#include "Scene.h"

// A child of the Scene class to make a new animated scene.
// Feel free to add any new member functions or variables to MyScene.
class MyScene : public Scene
{
    protected:
	
	int x = 0;
	int y = 0;

        // Called once when the scene begins.
        virtual void init()
        {
            // Keep this call to the parent's version of init()
            Scene::init();
            // Your code here

		FPS = 60.0;
        }

        // Called once every frame. 
        virtual void update()
        {
            // Your code here

		clearBoard();
		board[y][x] = 'X';
		x++;
		
		for(int i = 1; i < 100; i++){

			if (i%2){
				for (int j = 0; j < 100; j++){

				x++;
				}			
			}
			else{
			
				for (int j = 0; j < 100; j++){

					x--;
				}
			}
			
			y--;
			//sleep(1);
		};


            // Keep this call to the parent's version of update()
           // Scene::update();
        }
};
