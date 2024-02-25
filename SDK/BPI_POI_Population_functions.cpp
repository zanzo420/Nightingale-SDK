#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_POI_Population.BPI_POI_Population_C
// (None)

class UClass* IBPI_POI_Population_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_POI_Population_C");

	return Clss;
}


// BPI_POI_Population_C BPI_POI_Population.Default__BPI_POI_Population_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_POI_Population_C* IBPI_POI_Population_C::GetDefaultObj()
{
	static class IBPI_POI_Population_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_POI_Population_C*>(IBPI_POI_Population_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_POI_Population.BPI_POI_Population_C.Get POI Rally Point
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Rally_Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_POI_Population_C::Get_POI_Rally_Point(struct FVector* Rally_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Get POI Rally Point");

	Params::IBPI_POI_Population_C_Get_POI_Rally_Point_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rally_Location != nullptr)
		*Rally_Location = std::move(Parms.Rally_Location);

}


// Function BPI_POI_Population.BPI_POI_Population_C.Set NPC Spawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_POI_Population_C::Set_NPC_Spawner(class ABP_CreatureSpawnerBase_C* Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Set NPC Spawner");

	Params::IBPI_POI_Population_C_Set_NPC_Spawner_Params Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_POI_Population.BPI_POI_Population_C.Get NPC Spawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_POI_Population_C::Get_NPC_Spawner(class ABP_CreatureSpawnerBase_C** Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Get NPC Spawner");

	Params::IBPI_POI_Population_C_Get_NPC_Spawner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawner != nullptr)
		*Spawner = Parms.Spawner;

}


// Function BPI_POI_Population.BPI_POI_Population_C.Get EQS Context
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Context_Actor                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_POI_Population_C::Get_EQS_Context(class AActor** Context_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Get EQS Context");

	Params::IBPI_POI_Population_C_Get_EQS_Context_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context_Actor != nullptr)
		*Context_Actor = Parms.Context_Actor;

}


// Function BPI_POI_Population.BPI_POI_Population_C.Get Friendly Spawns
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          Spawn_Points                                                     (Parm, OutParm)

void IBPI_POI_Population_C::Get_Friendly_Spawns(TArray<struct FTransform>* Spawn_Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Get Friendly Spawns");

	Params::IBPI_POI_Population_C_Get_Friendly_Spawns_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawn_Points != nullptr)
		*Spawn_Points = std::move(Parms.Spawn_Points);

}


// Function BPI_POI_Population.BPI_POI_Population_C.Get Hostile Spawns
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransform>          Spawn_Points                                                     (Parm, OutParm)

void IBPI_POI_Population_C::Get_Hostile_Spawns(TArray<struct FTransform>* Spawn_Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Get Hostile Spawns");

	Params::IBPI_POI_Population_C_Get_Hostile_Spawns_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Spawn_Points != nullptr)
		*Spawn_Points = std::move(Parms.Spawn_Points);

}


// Function BPI_POI_Population.BPI_POI_Population_C.Add to Population
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_POI_Population_C::Add_to_Population(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Add to Population");

	Params::IBPI_POI_Population_C_Add_to_Population_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_POI_Population.BPI_POI_Population_C.Remove From Population
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_POI_Population_C::Remove_From_Population(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Remove From Population");

	Params::IBPI_POI_Population_C_Remove_From_Population_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_POI_Population.BPI_POI_Population_C.Get Population
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_CreatureBase_C*>  Creatures                                                        (Parm, OutParm)

void IBPI_POI_Population_C::Get_Population(TArray<class ABP_CreatureBase_C*>* Creatures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_POI_Population_C", "Get Population");

	Params::IBPI_POI_Population_C_Get_Population_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Creatures != nullptr)
		*Creatures = std::move(Parms.Creatures);

}

}


