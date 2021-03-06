//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MCStationeryCompositeImageMask, NSData, NSDictionary, NSImage, NSNumber, NSString;

@interface StationeryCompositeImageDropZone : NSObject
{
    NSImage *_userImage;
    double _zoomFactor;
    struct CGSize _panningOffset;
    BOOL _userImageNeedsDownsizedData;
    BOOL _useTemporaryImageForDrawing;
    NSData *_userImageOriginalData;
    NSNumber *_userImageOriginalFileType;
    NSString *_userImageID;
    MCStationeryCompositeImageMask *_mask;
    NSData *_userImageData;
    NSString *_userImageOriginalFileName;
    NSImage *_temporaryUserImage;
    double _temporaryZoomFactor;
    NSData *_temporaryUserImageData;
    NSData *_temporaryUserImageOriginalData;
    NSString *_temporaryUserImageOriginalFileName;
    NSNumber *_temporaryUserImageOriginalFileType;
    NSString *_temporaryUserImageID;
    NSImage *_compositedUserImage;
    NSImage *_rolloverImage;
    struct CGSize _temporaryPanningOffset;
}

@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
@property(retain, nonatomic) NSImage *compositedUserImage; // @synthesize compositedUserImage=_compositedUserImage;
@property(copy, nonatomic) NSString *temporaryUserImageID; // @synthesize temporaryUserImageID=_temporaryUserImageID;
@property(retain, nonatomic) NSNumber *temporaryUserImageOriginalFileType; // @synthesize temporaryUserImageOriginalFileType=_temporaryUserImageOriginalFileType;
@property(copy, nonatomic) NSString *temporaryUserImageOriginalFileName; // @synthesize temporaryUserImageOriginalFileName=_temporaryUserImageOriginalFileName;
@property(copy, nonatomic) NSData *temporaryUserImageOriginalData; // @synthesize temporaryUserImageOriginalData=_temporaryUserImageOriginalData;
@property(copy, nonatomic) NSData *temporaryUserImageData; // @synthesize temporaryUserImageData=_temporaryUserImageData;
@property(nonatomic) struct CGSize temporaryPanningOffset; // @synthesize temporaryPanningOffset=_temporaryPanningOffset;
@property(nonatomic) double temporaryZoomFactor; // @synthesize temporaryZoomFactor=_temporaryZoomFactor;
@property(retain, nonatomic) NSImage *temporaryUserImage; // @synthesize temporaryUserImage=_temporaryUserImage;
@property(nonatomic) BOOL useTemporaryImageForDrawing; // @synthesize useTemporaryImageForDrawing=_useTemporaryImageForDrawing;
@property(copy, nonatomic) NSString *userImageOriginalFileName; // @synthesize userImageOriginalFileName=_userImageOriginalFileName;
@property(copy, nonatomic) NSData *userImageData; // @synthesize userImageData=_userImageData;
@property(readonly, nonatomic) MCStationeryCompositeImageMask *mask; // @synthesize mask=_mask;
@property(copy, nonatomic) NSString *userImageID; // @synthesize userImageID=_userImageID;
@property(retain, nonatomic) NSNumber *userImageOriginalFileType; // @synthesize userImageOriginalFileType=_userImageOriginalFileType;
@property(copy, nonatomic) NSData *userImageOriginalData; // @synthesize userImageOriginalData=_userImageOriginalData;
//- (void).cxx_destruct;
- (void)setDownsizedUserImageData:(id)arg1;
@property(nonatomic) BOOL userImageNeedsDownsizedData;
@property(readonly, nonatomic) struct CGSize actualMaskSize;
@property(readonly, nonatomic) struct CGSize dropZoneSize;
@property(readonly, nonatomic) struct CGSize dropZoneOffset;
@property(readonly, nonatomic) double dropZoneAngle;
@property(readonly, nonatomic) struct CGRect dropZoneRect;
@property(readonly, nonatomic) struct CGRect boundingBox;
- (struct CGSize)disallowedOffsetOfVisibleRect:(struct CGRect)arg1 ofImageRect:(struct CGRect)arg2;
- (void)initialScaling:(double *)arg1 offset:(struct CGSize *)arg2 forImage:(id)arg3;
- (struct CGRect)visibleSubrectOfImage:(id)arg1 withZoomFactor:(double)arg2 panningOffset:(struct CGSize)arg3;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)getCurrentDrawingImage:(id *)arg1 zoomFactor:(double *)arg2 panningOffset:(struct CGSize *)arg3;
- (id)compositedUserImageIsForRollover:(char *)arg1;
- (void)abandonTemporaryUserImage;
- (void)makeTemporaryUserImagePermanent;
@property(copy, nonatomic) NSDictionary *temporaryUserImageDictionary;
- (id)userImageDictionary;
- (void)setUserImageFromDictionary:(id)arg1;
@property(nonatomic) struct CGSize panningOffset;
@property(nonatomic) double zoomFactor;
@property(retain, nonatomic) NSImage *userImage;
- (id)init;
- (id)initWithMask:(id)arg1;

@end

