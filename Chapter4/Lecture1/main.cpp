#include "Game2D.h"
#include "Examples/PrimitivesGallery.h"
#include "RandomNumberGenerator.h"
#include <vector>
#include <memory>

namespace jm
{
	using namespace std;

	class Example : public Game2D
	{
	public:
		Example()
			: Game2D()
		{
		}

		void update() override
		{
		}
	};
}

int main(void)
{
	jm::Example().run();

	return 0;
}
