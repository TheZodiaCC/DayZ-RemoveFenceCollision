modded class Construction
{
	override bool IsColliding( string part_name )
	{
		if (GetParent().IsInherited(Fence) || GetParent().IsInherited(FenceKit))
		{
			return false;
		}
		return super.IsColliding(part_name);
	}	
}