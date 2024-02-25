#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_POI_Population.BPI_POI_Population_C
class IBPI_POI_Population_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_POI_Population_C* GetDefaultObj();

	void Get_POI_Rally_Point(struct FVector* Rally_Location);
	void Set_NPC_Spawner(class ABP_CreatureSpawnerBase_C* Spawner);
	void Get_NPC_Spawner(class ABP_CreatureSpawnerBase_C** Spawner);
	void Get_EQS_Context(class AActor** Context_Actor);
	void Get_Friendly_Spawns(TArray<struct FTransform>* Spawn_Points);
	void Get_Hostile_Spawns(TArray<struct FTransform>* Spawn_Points);
	void Add_to_Population(bool* Success);
	void Remove_From_Population(bool* Success);
	void Get_Population(TArray<class ABP_CreatureBase_C*>* Creatures);
};

}


