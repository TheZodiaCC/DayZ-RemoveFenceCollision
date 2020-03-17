modded class Hologram
{

	override void EvaluateCollision()
	{
		if (m_Projection.IsInherited(Fence) || m_Projection.IsInherited(FenceKit))
		{
			SetIsColliding(false);
			return;
		}
		super.EvaluateCollision();
	}
}