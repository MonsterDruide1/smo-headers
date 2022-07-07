#pragma once

namespace sead { namespace ListImpl {

popBack();
popFront();
nth(int) const;
indexOf(sead::ListNode const*) const;
clear();
swap(sead::ListNode*, sead::ListNode*);
moveAfter(sead::ListNode*, sead::ListNode*);
moveBefore(sead::ListNode*, sead::ListNode*);
find(void const*, int, int (*)(void const*, void const*)) const;
reverse();
shuffle(sead::Random*);
sort(int, int (*)(void const*, void const*));
mergeSort(int, int (*)(void const*, void const*));
mergeSortImpl(sead::ListNode*, sead::ListNode*, int, int, int (*)(void const*, void const*));
uniq(int, int (*)(void const*, void const*));
checkLinks() const;

} } 
