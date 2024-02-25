#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_Torch.AnimB_FP_Torch_C
// (None)

class UClass* UAnimB_FP_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_Torch_C");

	return Clss;
}


// AnimB_FP_Torch_C AnimB_FP_Torch.Default__AnimB_FP_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_Torch_C* UAnimB_FP_Torch_C::GetDefaultObj()
{
	static class UAnimB_FP_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_Torch_C*>(UAnimB_FP_Torch_C::StaticClass()->DefaultObject);

	return Default;
}

}


