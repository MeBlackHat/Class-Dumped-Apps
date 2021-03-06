//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NlsUtil : NSObject
{
}

+ (unsigned long long)uptime;
+ (id)generatePlayerIdUID;
+ (id)keysAndPositionsWithUnsafeCharsInDict:(id)arg1;
+ (id)keyValuesWithoutEncodingInDict:(id)arg1 withCmsMap:(id)arg2;
+ (void)validateSpecialCharsForValuesInDict:(id)arg1 withCmsMap:(id)arg2 errorLogger:(id)arg3;
+ (id)httpMethodWithRequestMethod:(id)arg1 prefMethod:(id)arg2;
+ (id)dictionaryWithStringValuesOnly:(id)arg1;
+ (id)dictionaryFromInputObject:(id)arg1 withErrorLogger:(id)arg2;
+ (id)dictionaryFromJSONString:(id)arg1 withErrorLogger:(id)arg2;
+ (_Bool)isObjectTypeValid:(id)arg1 withErrorLogger:(id)arg2;
+ (id)defaultSfcodeWithConfigDefault:(id)arg1;
+ (id)sfcodeWithClientSupplied:(id)arg1 configSfcode:(id)arg2 defaultSfcode:(id)arg3;
+ (_Bool)isProductionBuild;
+ (_Bool)isSimulator;
+ (long long)applicationReleaseMode;
+ (id)getMobileProvisionPropertyList;
+ (id)getEmbeddedMobileProvision;
+ (id)caseInsensitiveKeyForObject:(id)arg1 inDict:(id)arg2;
+ (_Bool)caseInsensitiveExistsObject:(id)arg1 inArray:(id)arg2;
+ (void)addValue:(id)arg1 forCaseInsensitiveKey:(id)arg2 intoDict:(id)arg3;
+ (_Bool)isDict:(id)arg1 caseInsensitiveEqualToDict:(id)arg2;
+ (id)caseInsensitiveKey:(id)arg1 forDict:(id)arg2;
+ (id)objectForCaseInsensitiveKey:(id)arg1 forDict:(id)arg2;
+ (id)JSONRepresantableDictionaryForDictionary:(id)arg1;
+ (id)dictionaryWithStringForNumbersForDict:(id)arg1;
+ (id)clearDict:(id)arg1;
+ (id)weekDay;
+ (id)weekDayFormatter;
+ (id)createdDate;
+ (id)dateFormatter;
+ (id)formattedDate:(id)arg1;
+ (id)fullDateFormater;
+ (id)numberFormatter;
+ (_Bool)isFreeDiskspaceAvailableWithErrorLogger:(id)arg1;
+ (id)appIdDirectoryPath:(id)arg1 withErrorLogger:(id)arg2;
+ (id)clientApplicationVersion;
+ (id)preparePingUrlWithUrlParser:(id)arg1 forDictionary:(id)arg2 processorId:(long long)arg3 worker:(id)arg4 arrivalTime:(double)arg5 withResult:(_Bool *)arg6;
+ (id)checkFilters:(id)arg1 forDict:(id)arg2 withCidNull:(id)arg3 useImmed:(_Bool)arg4;
+ (struct CGSize)screenSize;
+ (float)systemVolume;
+ (_Bool)isOSAtLeastVersion:(CDStruct_2ec95fd7)arg1;
+ (id)buildVersion;
+ (id)applicationName;
+ (id)deviceType;
+ (id)systemNameVersion;
+ (id)systemVersion;
+ (id)systemName;
+ (id)deviceManufacturer;
+ (id)deviceModel;
+ (id)deviceName;
+ (double)timeNowInMillisecondsAccurate;
+ (double)timeNowInSecondsAccurate;
+ (double)timeNowInMillisecondsFloor;
+ (double)timeNowInSecondsFloor;
+ (id)timeZone;
+ (id)sessionUAID;
+ (id)xorEncodedString:(id)arg1 withKey:(id)arg2;
+ (id)md5EncodedString:(id)arg1;
+ (id)uriEncodedString:(id)arg1;
+ (id)nuidUserAgentFormatted:(id)arg1;
+ (_Bool)isArray:(id)arg1 consistsOfObjectsOnlyOfTheClass:(Class)arg2;
+ (_Bool)isArrayNullOrEmpty:(id)arg1;
+ (id)stringFromJSONObject:(id)arg1;
+ (id)stringforDictionary:(id)arg1;
+ (id)JSONObjectFromString:(id)arg1;
+ (id)firstMatchForPattern:(id)arg1 inString:(id)arg2;
+ (_Bool)matchesWord:(id)arg1 inString:(id)arg2;
+ (id)randomDigitStringWithLength:(int)arg1;
+ (id)numberFromString:(id)arg1;
+ (_Bool)isString:(id)arg1 caseInsensitiveEqualTo:(id)arg2;
+ (_Bool)isNumeric:(id)arg1;
+ (_Bool)isNullOrEmpty:(id)arg1;

@end

