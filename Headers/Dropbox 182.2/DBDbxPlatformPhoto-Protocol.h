//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DBDbxGetPhotoDataDelegate, DBDbxPhotoDataResult, DBDbxPlatformPhotoMetadata, DBDbxThumbnailInfo, NSNumber, NSString;
@protocol DBDbxGetAppleSignatureDelegate, DBDbxGetAppleSignatureRequestHandle, DBDbxGetPhotoDataRequestHandle;

@protocol DBDbxPlatformPhoto
- (id <DBDbxGetPhotoDataRequestHandle>)getPhotoDataAsync:(_Bool)arg1 transcodeType:(long long)arg2 fetchOriginal:(_Bool)arg3 delegate:(DBDbxGetPhotoDataDelegate *)arg4;
- (DBDbxPhotoDataResult *)getPhotoData:(_Bool)arg1 transcodeType:(long long)arg2 fetchOriginal:(_Bool)arg3;
- (DBDbxThumbnailInfo *)getThumbnail:(int)arg1 height:(int)arg2 mode:(long long)arg3 restrictSize:(NSNumber *)arg4;
- (id <DBDbxGetAppleSignatureRequestHandle>)getAppleSignature:(id <DBDbxGetAppleSignatureDelegate>)arg1;
- (DBDbxPlatformPhotoMetadata *)getMetadata;
- (NSString *)getLocalId;
@end

