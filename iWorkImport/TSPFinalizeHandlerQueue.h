/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface TSPFinalizeHandlerQueue : NSObject

{

    NSObject<OS_dispatch_queue> *_accessQueue;

    struct list<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *>> _order;

    struct hash_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem>>> _map;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addFinalizeHandlers:(vector_667badbd *)arg1 strongReferencesOrNull:(RepeatedField_80b81656 *)arg2 forIdentifier:(long long)arg3;

- (id)init;

- (void)reset;

- (void)runFinalizeHandlerForItem:(struct FinalizeHandlerItem *)arg1;

- (_Bool)runFinalizeHandlers;

- (void)visitItemForCycleDetection:(struct FinalizeHandlerItem *)arg1;



@end


