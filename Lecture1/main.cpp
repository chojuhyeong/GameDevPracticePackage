#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"

namespace jm
{
	class RotatingStarExample : public Game2D
	{
	private:
		float time = 0.0f;

	public:
		void update() override
		{
			beginTransformation();
			{
				rotate(time * 180.0f);
				translate(-0.4f, 0.0f);
				rotate(-360.0f * 0.2f * 0.5f * 0.5f);
				drawFilledStar(Colors::gold, 0.4f, 0.25f);
				drawFilledCircle(Colors::black, 0.01f);
			}
			endTransformation();

			drawFilledCircle(Colors::red, 0.01f);

			time += this->getTimeStep();
		}
	};
}

int main(void)
{
	//jm::Game2D().run();
	jm::RotatingStarExample().run();
	jm::PrimitivesGallery().init("This is my digital canvas!", 1280, 960, false).run();
	jm::FaceExample().run();
	jm::TankExample().init("Tank example", 1280, 960, false, 2).run();

	return 0;
}
