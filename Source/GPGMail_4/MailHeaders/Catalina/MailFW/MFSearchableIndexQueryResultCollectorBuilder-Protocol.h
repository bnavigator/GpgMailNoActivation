//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MFSearchableIndexQueryResultProviderBuilder-Protocol.h>

@class EMSearchableIndexQueryExpression;

@protocol MFSearchableIndexQueryResultCollectorBuilder <MFSearchableIndexQueryResultProviderBuilder>
//@property(copy, nonatomic) CDUnknownBlockType recoveryBlock;
@property(nonatomic) BOOL live;
@property(retain, nonatomic) EMSearchableIndexQueryExpression *originalExpression;
@end

