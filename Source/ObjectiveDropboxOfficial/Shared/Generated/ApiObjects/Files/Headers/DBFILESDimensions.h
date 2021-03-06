///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESDimensions;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `Dimensions` struct.
///
/// Dimensions for a photo or video.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDimensions : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Height of the photo/video.
@property (nonatomic, readonly) NSNumber *height;

/// Width of the photo/video.
@property (nonatomic, readonly) NSNumber *width;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param height Height of the photo/video.
/// @param width Width of the photo/video.
///
/// @return An initialized instance.
///
- (instancetype)initWithHeight:(NSNumber *)height width:(NSNumber *)width;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `Dimensions` struct.
///
@interface DBFILESDimensionsSerializer : NSObject

///
/// Serializes `DBFILESDimensions` instances.
///
/// @param instance An instance of the `DBFILESDimensions` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDimensions` API object.
///
+ (NSDictionary *)serialize:(DBFILESDimensions *)instance;

///
/// Deserializes `DBFILESDimensions` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDimensions` API object.
///
/// @return An instantiation of the `DBFILESDimensions` object.
///
+ (DBFILESDimensions *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
