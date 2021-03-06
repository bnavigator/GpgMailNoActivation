//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTask.h"

#import "MFEWSPersistFolderHierarchyTaskOperationDelegate.h"
#import "MFEWSSyncFolderHierarchyTaskOperationDelegate.h"

@class MFEWSPersistFolderHierarchyTaskOperation, MFEWSPruneFolderHierarchyTaskOperation, MFEWSSyncFolderHierarchyTaskOperation, NSMutableArray, NSMutableSet, NSString;

@interface MFEWSFolderHierarchyReconcileTask : MCTask <MFEWSSyncFolderHierarchyTaskOperationDelegate, MFEWSPersistFolderHierarchyTaskOperationDelegate>
{
    MFEWSSyncFolderHierarchyTaskOperation *_syncFolderHierarchyTaskOperation;	// 8 = 0x8
    MFEWSPersistFolderHierarchyTaskOperation *_persistFolderHierarchyTaskOperation;	// 16 = 0x10
    NSMutableArray *_pendingBatchesToPersist;	// 24 = 0x18
    NSMutableSet *_foundFolderIdStrings;	// 32 = 0x20
    NSString *_syncStateToReconcile;	// 40 = 0x28
    MFEWSPruneFolderHierarchyTaskOperation *_pruneFolderHierarchyTaskOperation;	// 48 = 0x30
}

@property(retain, nonatomic) MFEWSPruneFolderHierarchyTaskOperation *pruneFolderHierarchyTaskOperation; // @synthesize pruneFolderHierarchyTaskOperation=_pruneFolderHierarchyTaskOperation;
@property(copy, nonatomic) NSString *syncStateToReconcile; // @synthesize syncStateToReconcile=_syncStateToReconcile;
- (void).cxx_destruct;	// IMP=0x000000000008cbca
- (void)recalculatePriorities;	// IMP=0x000000000008c9fe
- (void)operationFinished:(id)arg1;	// IMP=0x000000000008c8c2
- (void)persistFolderHierarchyOperation:(id)arg1 completedBatch:(id)arg2;	// IMP=0x000000000008c302
- (void)syncFolderHierarchyTaskOperation:(id)arg1 completedBatch:(id)arg2;	// IMP=0x000000000008be04
- (id)nextPersistenceOperation;	// IMP=0x000000000008bc22
- (id)nextNetworkOperation;	// IMP=0x000000000008bb57
@property(retain, nonatomic) MFEWSPersistFolderHierarchyTaskOperation *persistFolderHierarchyTaskOperation;
@property(retain, nonatomic) MFEWSSyncFolderHierarchyTaskOperation *syncFolderHierarchyTaskOperation;
- (id)init;	// IMP=0x000000000008b962
- (id)initWithInitialSyncState:(id)arg1;	// IMP=0x000000000008b840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

