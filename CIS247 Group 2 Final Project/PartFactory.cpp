#include "PartFactory.h"
#include "Util.h"
#include<string>
#include<tuple>
#include <iostream>

using namespace std;

tuple<string, string, double> PartFactory::GetBasicInfo()
{
    string manu = Util::GetText("Please enter the Manufacturer: ");
    string model = Util::GetText("Please enter the model: ");
    double price = Util::GetInput<double>("Please enter the price: ");

    return make_tuple(manu, model, price);
}

GPU PartFactory::CreateGPU()
{
    auto info = GetBasicInfo();
    int memory = Util::GetInput<int>("How much memory does this GPU have? ");

    return GPU(get<0>(info), get<1>(info), get<2>(info), memory);
}

CPU PartFactory::CreateCPU()
{
    auto info = GetBasicInfo();
    string chip = Util::GetText("What is the Chipset for this CPU? ");
    double clockspeed = Util::GetInput<double>("What is the clockspeed? ");

    return CPU(get<0>(info), get<1>(info), get<2>(info), chip, clockspeed);
}

MOBO PartFactory::CreateMOBO()
{
    auto info = GetBasicInfo();
    string chipset = Util::GetText("What is the Chipset for this Motherboard? ");

    return MOBO(get<0>(info), get<1>(info), get<2>(info), chipset);
}

RAM PartFactory::CreateRAM()
{
    auto info = GetBasicInfo();
    double clockspeed = Util::GetInput<double>("What is the clockspeed for this RAM? ");
    int memory = Util::GetInput<int>("How much memory does this RAM have? ");

    return RAM(get<0>(info), get<1>(info), get<2>(info), clockspeed, memory);
}
