#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Candle_Cluster_04.BP_Candle_Cluster_04_C
// (Actor)

class UClass* ABP_Candle_Cluster_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Candle_Cluster_04_C");

	return Clss;
}


// BP_Candle_Cluster_04_C BP_Candle_Cluster_04.Default__BP_Candle_Cluster_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Candle_Cluster_04_C* ABP_Candle_Cluster_04_C::GetDefaultObj()
{
	static class ABP_Candle_Cluster_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Candle_Cluster_04_C*>(ABP_Candle_Cluster_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


