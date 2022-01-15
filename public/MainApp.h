#pragma once
#include "Base.h"

class MainApp final : public Engine::CBase
{
public:
		MainApp();
		virtual ~MainApp() = default;

public:
		virtual void Free();
};

