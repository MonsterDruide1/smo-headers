#pragma once

namespace nn { namespace g3d { namespace ResMesh {

Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long);
Cleanup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
DrawSubMesh(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, int, int) const;
DrawSubMesh(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, int, int, int) const;

} } } 
