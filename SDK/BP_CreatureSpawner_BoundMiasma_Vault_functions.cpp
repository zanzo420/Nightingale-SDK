#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureSpawner_BoundMiasma_Vault.BP_CreatureSpawner_BoundMiasma_Vault_C
// (Actor, Pawn)

class UClass* ABP_CreatureSpawner_BoundMiasma_Vault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureSpawner_BoundMiasma_Vault_C");

	return Clss;
}


// BP_CreatureSpawner_BoundMiasma_Vault_C BP_CreatureSpawner_BoundMiasma_Vault.Default__BP_CreatureSpawner_BoundMiasma_Vault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureSpawner_BoundMiasma_Vault_C* ABP_CreatureSpawner_BoundMiasma_Vault_C::GetDefaultObj()
{
	static class ABP_CreatureSpawner_BoundMiasma_Vault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureSpawner_BoundMiasma_Vault_C*>(ABP_CreatureSpawner_BoundMiasma_Vault_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureSpawner_BoundMiasma_Vault.BP_CreatureSpawner_BoundMiasma_Vault_C.GetMiasmaEQS
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQuery*                   BoundMiasmaEQS                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureSpawner_BoundMiasma_Vault_C::GetMiasmaEQS(class UEnvQuery** BoundMiasmaEQS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureSpawner_BoundMiasma_Vault_C", "GetMiasmaEQS");

	Params::ABP_CreatureSpawner_BoundMiasma_Vault_C_GetMiasmaEQS_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BoundMiasmaEQS != nullptr)
		*BoundMiasmaEQS = Parms.BoundMiasmaEQS;

}

}


