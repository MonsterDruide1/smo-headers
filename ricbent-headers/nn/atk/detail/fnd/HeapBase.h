#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { namespace HeapBase {

FindListContainHeap(nn::atk::detail::fnd::HeapBase*);
FindContainHeap(nn::util::IntrusiveList<nn::atk::detail::fnd::HeapBase, nn::util::IntrusiveListBaseNodeTraits<nn::atk::detail::fnd::HeapBase, nn::atk::detail::fnd::HeapBase> >*, void const*);
FindContainHeap(void const*);
FindParentHeap(nn::atk::detail::fnd::HeapBase const*);
SetFillValue(nn::atk::detail::fnd::HeapBase::FillType, unsigned int);
GetFillValue(nn::atk::detail::fnd::HeapBase::FillType);
GetHeapType();
Initialize(unsigned int, void*, void*, unsigned short);
SetOptionFlag(unsigned short);
FillNoUseMemory(void*, unsigned long);
Finalize();
LockHeap();
UnlockHeap();
FillFreeMemory(void*, unsigned long);
GetOptionFlag();
FillAllocMemory(void*, unsigned long);
DefaultAlignment;
ExpHeapSignature;
FrameHeapSignature;
UnitHeapSignature;
OptionZeroClear;
OptionDebugFill;
OptionThreadSafe;
ErrorPrint;
MIN_ALIGNMENT;

} } } } } 
