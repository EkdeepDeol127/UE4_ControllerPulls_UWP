// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Lab3_Deol_EkdeepTarget : TargetRules
{
	public Lab3_Deol_EkdeepTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Lab3_Deol_Ekdeep");
	}
}
