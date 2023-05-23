// Fill out your copyright notice in the Description page of Project Settings.


#include "Cpp_WheeledVehiclePawn.h"

ACpp_WheeledVehiclePawn::ACpp_WheeledVehiclePawn()
{
	PrimaryActorTick.bCanEverTick = true;

	R_lever_base = CreateDefaultSubobject<USceneComponent>(TEXT("R_lever_base"));
	
	L_lever_base = CreateDefaultSubobject<USceneComponent>(TEXT("L_lever_base"));
}

FTransform ACpp_WheeledVehiclePawn::R_Control()
{
	if (!Is_right_grip) {
		return Ik_Transe;
	}



	return FTransform();
}
