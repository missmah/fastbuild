// FunctionLibrary
//------------------------------------------------------------------------------
#pragma once

// Includes
//------------------------------------------------------------------------------
#include "Function.h"
#include "FunctionObjectList.h"

// FunctionLibrary
//------------------------------------------------------------------------------
class FunctionLibrary : public FunctionObjectList
{
public:
    explicit        FunctionLibrary();
    inline virtual ~FunctionLibrary() = default;

protected:
    virtual bool AcceptsHeader() const override;
    virtual bool NeedsHeader() const override;

    virtual bool Commit( NodeGraph & nodeGraph, const BFFIterator & funcStartIter ) const override;
};

//------------------------------------------------------------------------------
