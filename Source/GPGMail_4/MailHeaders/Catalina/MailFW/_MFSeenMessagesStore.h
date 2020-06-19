//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSEntityDescription, NSPersistentStoreCoordinator, NSString;

@interface _MFSeenMessagesStore : NSObject
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSString *_persistentStorePath;
    NSEntityDescription *_accountEntity;
    NSEntityDescription *_seenMessageEntity;
}

@property(retain, nonatomic) NSEntityDescription *seenMessageEntity; // @synthesize seenMessageEntity=_seenMessageEntity;
@property(retain, nonatomic) NSEntityDescription *accountEntity; // @synthesize accountEntity=_accountEntity;
@property(readonly, copy, nonatomic) NSString *persistentStorePath; // @synthesize persistentStorePath=_persistentStorePath;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
//- (void).cxx_destruct;
- (id)_managedObjectModel;
- (id)init;

@end

