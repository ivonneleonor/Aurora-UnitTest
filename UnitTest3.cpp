#include "pch.h"
#include "CppUnitTest.h"
#include "../Aurora2/Aurora2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string info = "SingleStoryInfo";
			SingleStory SS1;
			SS1.setInfo(info);
			Assert::AreEqual(info, SS1.getInfo());

		}

		TEST_METHOD(TestMethod2)
		{
			std::string info = "TwoStoryInfo";
			TwoStory TS1;
			TS1.setInfo(info);
			Assert::AreEqual(info, TS1.getInfo());

		}

		TEST_METHOD(TestMethod3)
		{
			std::string info = "ComercialBuildingInfo";
			ComercialBuilding CB1;
			CB1.setInfo(info);
			Assert::AreEqual(info, CB1.getInfo());

		}

		TEST_METHOD(TestMethod4)
		{
			std::string qual = "Qualification1";
			std::string availa = "Availability1";
			CertifiedInstaller CI1;
			CI1.setQualification(qual);
			Assert::AreEqual(qual, CI1.getQualification());
			

		}

		TEST_METHOD(TestMethod5)
		{
			int JM = 20;			
			vector<Job> JobsMonday;		
			int JMonday = 0;
			Calendar CalendarTest;
			JMonday = CalendarTest.result(JMonday);
			Assert::AreEqual(20, JMonday);
					
			//JobsMonday.size()
		}

		


	};
}
