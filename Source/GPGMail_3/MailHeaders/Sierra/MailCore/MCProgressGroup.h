//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MCDiscretionaryWorkScheduler, NSMutableDictionary, NSProgress;

@interface MCProgressGroup : NSObject
{
    MCDiscretionaryWorkScheduler *_workScheduler;	// 8 = 0x8
    NSMutableDictionary *_progressBySlice;	// 16 = 0x10
    NSProgress *_parent;	// 24 = 0x18
}

@property(readonly, nonatomic) __weak NSProgress *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;	// IMP=0x000000000008f19b
- (void)completeAllProgress;	// IMP=0x000000000008f0ff
- (void)modifyCompletedBy:(long long)arg1 forSlice:(long long)arg2;	// IMP=0x000000000008f010
- (void)modifyTotalBy:(long long)arg1 forSlice:(long long)arg2;	// IMP=0x000000000008edc4
@property(retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler; // @synthesize workScheduler=_workScheduler;
- (id)init;	// IMP=0x000000000008ebd5
- (id)initWithParent:(id)arg1;	// IMP=0x000000000008eb44

@end

