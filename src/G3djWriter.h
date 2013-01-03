#ifndef G3DJWRITER_H
#define G3DJWRITER_H

#include "JSONWriter.h"
#include "G3djFile.h"

#define G3DJ_VERSION "1.0"

namespace fbxconv {
	class G3djWriter {
	public:
		G3djWriter();
		~G3djWriter();

		void exportG3dj(G3djFile *file, const char* filePath);
	private:
		JSONWriter* writer;

		void writeAttributes(Mesh* mesh);
		void writeVertices(Mesh* mesh);
		void writeMeshParts(Mesh* mesh);

		const char* getPrimitiveTypeString(int primitiveTypeId);
	};
};

#endif