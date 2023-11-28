//CLexplorateur.h

#pragma once
#include <array>
using namespace System::IO;
using namespace System;

namespace NS_composants
{
	ref class CLfichier
	{
	public:
		cli::array<String^>^ explorerUnDossier(String^);
		void effacer(String^);
		void copier(String^, String^);
	};
}


