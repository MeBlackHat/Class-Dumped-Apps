//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DKImagePickerController/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface _TtC23DKImagePickerController33DKImageAssetExporterConfiguration : NSObject <NSCopying>
{
    // Error parsing type: , name: imageExportPreset
    // Error parsing type: , name: videoExportPreset
    // Error parsing type: , name: avOutputFileType
    // Error parsing type: , name: exportDirectory
}

- (void).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
- (id)init;
@property(nonatomic, copy) NSURL *exportDirectory;
@property(nonatomic, copy) NSString *avOutputFileType; // @synthesize avOutputFileType;
@property(nonatomic, copy) NSString *videoExportPreset;
@property(nonatomic) long long imageExportPreset; // @synthesize imageExportPreset;

@end

