//CLimages.h
#pragma once
#using <System.dll>
using namespace System;
namespace NS_composants
{
	public ref class CLimages
	{
	public:
		System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier);
	};
}
