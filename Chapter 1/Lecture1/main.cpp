#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
	class MouseExample : public Game2D
	{
	public:
		void update() override
		{
			const vec2 mouse_pos = getCursorPos();

			if (isMouseButtonPressed(GLFW_MOUSE_BUTTON_1) == true)
			{
				translate(mouse_pos);
				drawFilledCircle(Colors::gold, 0.1f);
			}

			if (isMouseButtonPressed(GLFW_MOUSE_BUTTON_2))
			{
				translate(mouse_pos);
				drawFilledCircle(Colors::red, 0.1f);
			}
		}
	};
}

int main(void)
{
	jm::MouseExample().init("This is my digital canvas!", 1000, 1000, false).run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().run();
	//jm::PrimitivesGallery().run();
	//jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	//jm::TankExample().run();

	return 0;
}
