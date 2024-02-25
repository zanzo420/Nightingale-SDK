#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Get POI Rally Point
struct IBPI_POI_Population_C_Get_POI_Rally_Point_Params
{
public:
	struct FVector                               Rally_Location;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Set NPC Spawner
struct IBPI_POI_Population_C_Set_NPC_Spawner_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Spawner;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Get NPC Spawner
struct IBPI_POI_Population_C_Get_NPC_Spawner_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Spawner;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Get EQS Context
struct IBPI_POI_Population_C_Get_EQS_Context_Params
{
public:
	class AActor*                                Context_Actor;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Get Friendly Spawns
struct IBPI_POI_Population_C_Get_Friendly_Spawns_Params
{
public:
	TArray<struct FTransform>                    Spawn_Points;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Get Hostile Spawns
struct IBPI_POI_Population_C_Get_Hostile_Spawns_Params
{
public:
	TArray<struct FTransform>                    Spawn_Points;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Add to Population
struct IBPI_POI_Population_C_Add_to_Population_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Remove From Population
struct IBPI_POI_Population_C_Remove_From_Population_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_POI_Population.BPI_POI_Population_C.Get Population
struct IBPI_POI_Population_C_Get_Population_Params
{
public:
	TArray<class ABP_CreatureBase_C*>            Creatures;                                         // 0x0(0x10)(Parm, OutParm)
};

}
}


