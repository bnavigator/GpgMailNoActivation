//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MCMessage, MFMessageThread;

@protocol MFMessageSortingValueDelegate
- (long long)sortingUniqueIdentifierForMessageThread:(MFMessageThread *)arg1;
- (long long)sortingMessageFlagsForMessage:(MCMessage *)arg1 appliedFlagColors:(id *)arg2 conversationFlags:(unsigned long long *)arg3;
- (unsigned long long)sortingSizeForMessage:(MCMessage *)arg1;
@end

