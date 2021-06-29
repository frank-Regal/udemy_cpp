.PHONY: clean All

All:
	@echo "----------Building project:[ declare_class_and_object - Debug ]----------"
	@cd "lecture_exercises" && "$(MAKE)" -f  "declare_class_and_object.mk"
clean:
	@echo "----------Cleaning project:[ declare_class_and_object - Debug ]----------"
	@cd "lecture_exercises" && "$(MAKE)" -f  "declare_class_and_object.mk" clean
