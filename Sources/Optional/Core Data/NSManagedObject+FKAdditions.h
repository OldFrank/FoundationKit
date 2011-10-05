// Part of FoundationKit http://foundationk.it

#import <CoreData/CoreData.h>

/**
 This category adds several additions to NSManagedObject for making life easier.
 */
@interface NSManagedObject (FKAdditions)

/**
 We overwrite description for NSManagedObject and return an autogenerated description of the properties.
 
 @see NSObject+FKDescription
 @return the automatically generated description of the properties of the object
 */
- (NSString *)description;

/**
 This method tries to set the given string value for the property with the given key, whether the property is
 a string or not. Currenty only NSString itself and NSNumber are supported.
 
 @param stringValue the string-representation of the value to set
 @param key the name of the property to set
 */
- (void)setStringValue:(NSString *)stringValue forKey:(NSString *)key;

/**
 This method gets the userInfo-dict of the given property and returns the value assigned with the given key.
 
 @param key The key to lookup in the userInfo dictionary of the property
 @param property The property to introspect
 @return The value of the userInfo-dict of the given property with the given key, or nil if it doesn't exist
 */
 
- (id)userInfoValueForKey:(NSString *)key ofProperty:(NSString *)property;

@end